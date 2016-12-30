/*
 *	autogen/server/zone/objects/mission/DeliverMissionObjective.cpp generated by engine3 IDL compiler 0.60
 */

#include "DeliverMissionObjective.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/ai/AiAgent.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/area/MissionSpawnActiveArea.h"

/*
 *	DeliverMissionObjectiveStub
 */

enum {RPC_FINALIZE__ = 1114407076,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_GETITEM__,RPC_GETOBJECTIVESTATUS__,RPC_ACTIVATE__,RPC_DEACTIVATE__,RPC_ACTIVATEWITHRESULT__,RPC_ABORT__,RPC_COMPLETE__,RPC_DESPAWNNPCS__,RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_,RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_,};

DeliverMissionObjective::DeliverMissionObjective(MissionObject* mission) : MissionObjective(DummyConstructorParameter::instance()) {
	DeliverMissionObjectiveImplementation* _implementation = new DeliverMissionObjectiveImplementation(mission);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("DeliverMissionObjective");
}

DeliverMissionObjective::DeliverMissionObjective(DummyConstructorParameter* param) : MissionObjective(param) {
	_setClassName("DeliverMissionObjective");
}

DeliverMissionObjective::~DeliverMissionObjective() {
}



void DeliverMissionObjective::initializeTransientMembers() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

TangibleObject* DeliverMissionObjective::getItem() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEM__);

		return static_cast<TangibleObject*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getItem();
	}
}

int DeliverMissionObjective::getObjectiveStatus() const {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTIVESTATUS__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getObjectiveStatus();
	}
}

void DeliverMissionObjective::activate() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->activate();
	}
}

void DeliverMissionObjective::deactivate() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->deactivate();
	}
}

bool DeliverMissionObjective::activateWithResult() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEWITHRESULT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->activateWithResult();
	}
}

void DeliverMissionObjective::abort() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->abort();
	}
}

void DeliverMissionObjective::complete() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->complete();
	}
}

void DeliverMissionObjective::despawnNpcs() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESPAWNNPCS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->despawnNpcs();
	}
}

void DeliverMissionObjective::updateMissionStatus(CreatureObject* player) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateMissionStatus(player);
	}
}

bool DeliverMissionObjective::updateMissionTarget(CreatureObject* player) {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->updateMissionTarget(player);
	}
}

NpcSpawnPoint* DeliverMissionObjective::getTargetSpawnPoint() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getTargetSpawnPoint();
	}
}

NpcSpawnPoint* DeliverMissionObjective::getDestinationSpawnPoint() {
	DeliverMissionObjectiveImplementation* _implementation = static_cast<DeliverMissionObjectiveImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getDestinationSpawnPoint();
	}
}

DistributedObjectServant* DeliverMissionObjective::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* DeliverMissionObjective::_getImplementationForRead() const {
	return _impl;
}

void DeliverMissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	DeliverMissionObjectiveImplementation
 */

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(DummyConstructorParameter* param) : MissionObjectiveImplementation(param) {
	_initializeImplementation();
}


DeliverMissionObjectiveImplementation::~DeliverMissionObjectiveImplementation() {
	DeliverMissionObjectiveImplementation::finalize();
}


void DeliverMissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(DeliverMissionObjectiveHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void DeliverMissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<DeliverMissionObjective*>(stub);
	MissionObjectiveImplementation::_setStub(stub);
}

DistributedObjectStub* DeliverMissionObjectiveImplementation::_getStub() {
	return _this.get();
}

DeliverMissionObjectiveImplementation::operator const DeliverMissionObjective*() {
	return _this.get();
}

void DeliverMissionObjectiveImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void DeliverMissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void DeliverMissionObjectiveImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void DeliverMissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void DeliverMissionObjectiveImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void DeliverMissionObjectiveImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void DeliverMissionObjectiveImplementation::_serializationHelperMethod() {
	MissionObjectiveImplementation::_serializationHelperMethod();

	_setClassName("DeliverMissionObjective");

}

void DeliverMissionObjectiveImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(DeliverMissionObjectiveImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool DeliverMissionObjectiveImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (MissionObjectiveImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x4bfea925: //DeliverMissionObjective.item
		TypeInfo<ManagedReference<TangibleObject* > >::parseFromBinaryStream(&item, stream);
		return true;

	case 0xb4743a09: //DeliverMissionObjective.targetSpawnPoint
		TypeInfo<Reference<NpcSpawnPoint* > >::parseFromBinaryStream(&targetSpawnPoint, stream);
		return true;

	case 0xe870acb: //DeliverMissionObjective.destinationSpawnPoint
		TypeInfo<Reference<NpcSpawnPoint* > >::parseFromBinaryStream(&destinationSpawnPoint, stream);
		return true;

	case 0x225a9762: //DeliverMissionObjective.objectiveStatus
		TypeInfo<int >::parseFromBinaryStream(&objectiveStatus, stream);
		return true;

	}

	return false;
}

void DeliverMissionObjectiveImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = DeliverMissionObjectiveImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int DeliverMissionObjectiveImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = MissionObjectiveImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x4bfea925; //DeliverMissionObjective.item
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<TangibleObject* > >::toBinaryStream(&item, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xb4743a09; //DeliverMissionObjective.targetSpawnPoint
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<NpcSpawnPoint* > >::toBinaryStream(&targetSpawnPoint, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe870acb; //DeliverMissionObjective.destinationSpawnPoint
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<NpcSpawnPoint* > >::toBinaryStream(&destinationSpawnPoint, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x225a9762; //DeliverMissionObjective.objectiveStatus
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&objectiveStatus, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

DeliverMissionObjectiveImplementation::DeliverMissionObjectiveImplementation(MissionObject* mission) : MissionObjectiveImplementation(mission) {
	_initializeImplementation();
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		objectiveStatus = INITSTATUS;
	objectiveStatus = INITSTATUS;
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		Logger.setLoggingName("DeliverMissionObjective");
	Logger::setLoggingName("DeliverMissionObjective");
}

void DeliverMissionObjectiveImplementation::finalize() {
}

void DeliverMissionObjectiveImplementation::initializeTransientMembers() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		super.initializeTransientMembers();
	MissionObjectiveImplementation::initializeTransientMembers();
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		Logger.setLoggingName("DeliverMissionObjective");
	Logger::setLoggingName("DeliverMissionObjective");
}

TangibleObject* DeliverMissionObjectiveImplementation::getItem() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return item;
	return item;
}

int DeliverMissionObjectiveImplementation::getObjectiveStatus() const{
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return objectiveStatus;
	return objectiveStatus;
}

NpcSpawnPoint* DeliverMissionObjectiveImplementation::getTargetSpawnPoint() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return targetSpawnPoint;
	return targetSpawnPoint;
}

NpcSpawnPoint* DeliverMissionObjectiveImplementation::getDestinationSpawnPoint() {
	// server/zone/objects/mission/DeliverMissionObjective.idl():  		return destinationSpawnPoint;
	return destinationSpawnPoint;
}

/*
 *	DeliverMissionObjectiveAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


DeliverMissionObjectiveAdapter::DeliverMissionObjectiveAdapter(DeliverMissionObjective* obj) : MissionObjectiveAdapter(obj) {
}

void DeliverMissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_FINALIZE__:
		{
			
			finalize();
			
		}
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_GETITEM__:
		{
			
			DistributedObject* _m_res = getItem();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_GETOBJECTIVESTATUS__:
		{
			
			int _m_res = getObjectiveStatus();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ACTIVATE__:
		{
			
			activate();
			
		}
		break;
	case RPC_DEACTIVATE__:
		{
			
			deactivate();
			
		}
		break;
	case RPC_ACTIVATEWITHRESULT__:
		{
			
			bool _m_res = activateWithResult();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ABORT__:
		{
			
			abort();
			
		}
		break;
	case RPC_COMPLETE__:
		{
			
			complete();
			
		}
		break;
	case RPC_DESPAWNNPCS__:
		{
			
			despawnNpcs();
			
		}
		break;
	case RPC_UPDATEMISSIONSTATUS__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			updateMissionStatus(player);
			
		}
		break;
	case RPC_UPDATEMISSIONTARGET__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			bool _m_res = updateMissionTarget(player);
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		MissionObjectiveAdapter::invokeMethod(methid, inv);
	}
}

void DeliverMissionObjectiveAdapter::finalize() {
	(static_cast<DeliverMissionObjective*>(stub))->finalize();
}

void DeliverMissionObjectiveAdapter::initializeTransientMembers() {
	(static_cast<DeliverMissionObjective*>(stub))->initializeTransientMembers();
}

TangibleObject* DeliverMissionObjectiveAdapter::getItem() {
	return (static_cast<DeliverMissionObjective*>(stub))->getItem();
}

int DeliverMissionObjectiveAdapter::getObjectiveStatus() const {
	return (static_cast<DeliverMissionObjective*>(stub))->getObjectiveStatus();
}

void DeliverMissionObjectiveAdapter::activate() {
	(static_cast<DeliverMissionObjective*>(stub))->activate();
}

void DeliverMissionObjectiveAdapter::deactivate() {
	(static_cast<DeliverMissionObjective*>(stub))->deactivate();
}

bool DeliverMissionObjectiveAdapter::activateWithResult() {
	return (static_cast<DeliverMissionObjective*>(stub))->activateWithResult();
}

void DeliverMissionObjectiveAdapter::abort() {
	(static_cast<DeliverMissionObjective*>(stub))->abort();
}

void DeliverMissionObjectiveAdapter::complete() {
	(static_cast<DeliverMissionObjective*>(stub))->complete();
}

void DeliverMissionObjectiveAdapter::despawnNpcs() {
	(static_cast<DeliverMissionObjective*>(stub))->despawnNpcs();
}

void DeliverMissionObjectiveAdapter::updateMissionStatus(CreatureObject* player) {
	(static_cast<DeliverMissionObjective*>(stub))->updateMissionStatus(player);
}

bool DeliverMissionObjectiveAdapter::updateMissionTarget(CreatureObject* player) {
	return (static_cast<DeliverMissionObjective*>(stub))->updateMissionTarget(player);
}

/*
 *	DeliverMissionObjectiveHelper
 */

DeliverMissionObjectiveHelper* DeliverMissionObjectiveHelper::staticInitializer = DeliverMissionObjectiveHelper::instance();

DeliverMissionObjectiveHelper::DeliverMissionObjectiveHelper() {
	className = "DeliverMissionObjective";

	Core::getObjectBroker()->registerClass(className, this);
}

void DeliverMissionObjectiveHelper::finalizeHelper() {
	DeliverMissionObjectiveHelper::finalize();
}

DistributedObject* DeliverMissionObjectiveHelper::instantiateObject() {
	return new DeliverMissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* DeliverMissionObjectiveHelper::instantiateServant() {
	return new DeliverMissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DeliverMissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DeliverMissionObjectiveAdapter(static_cast<DeliverMissionObjective*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
