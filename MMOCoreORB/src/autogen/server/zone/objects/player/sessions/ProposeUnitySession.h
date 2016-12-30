/*
 *	autogen/server/zone/objects/player/sessions/ProposeUnitySession.h generated by engine3 IDL compiler 0.60
 */

#ifndef PROPOSEUNITYSESSION_H_
#define PROPOSEUNITYSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "engine/core/ManagedObject.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class ProposeUnitySession : public Facade {
public:
	ProposeUnitySession(unsigned long long p1, unsigned long long p2, unsigned long long sceno);

	unsigned long long getAskingPlayer();

	unsigned long long getRespondingPlayer();

	unsigned long long getAskingPlayerRing();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ProposeUnitySession(DummyConstructorParameter* param);

	virtual ~ProposeUnitySession();

	friend class ProposeUnitySessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class ProposeUnitySessionImplementation : public FacadeImplementation {
protected:
	unsigned long long askingPlayer;

	unsigned long long respondingPlayer;

	unsigned long long askingPlayerRing;

public:
	ProposeUnitySessionImplementation(unsigned long long p1, unsigned long long p2, unsigned long long sceno);

	ProposeUnitySessionImplementation(DummyConstructorParameter* param);

	unsigned long long getAskingPlayer();

	unsigned long long getRespondingPlayer();

	unsigned long long getAskingPlayerRing();

	WeakReference<ProposeUnitySession*> _this;

	operator const ProposeUnitySession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ProposeUnitySessionImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class ProposeUnitySession;
};

class ProposeUnitySessionAdapter : public FacadeAdapter {
public:
	ProposeUnitySessionAdapter(ProposeUnitySession* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned long long getAskingPlayer();

	unsigned long long getRespondingPlayer();

	unsigned long long getAskingPlayerRing();

};

class ProposeUnitySessionHelper : public DistributedObjectClassHelper, public Singleton<ProposeUnitySessionHelper> {
	static ProposeUnitySessionHelper* staticInitializer;

public:
	ProposeUnitySessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ProposeUnitySessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*PROPOSEUNITYSESSION_H_*/