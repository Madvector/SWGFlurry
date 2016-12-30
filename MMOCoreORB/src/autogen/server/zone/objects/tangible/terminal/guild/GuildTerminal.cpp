/*
 *	autogen/server/zone/objects/tangible/terminal/guild/GuildTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "GuildTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/guild/GuildObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

/*
 *	GuildTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 3605692318,RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_ISGUILDTERMINAL__};

GuildTerminal::GuildTerminal() : Terminal(DummyConstructorParameter::instance()) {
	GuildTerminalImplementation* _implementation = new GuildTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("GuildTerminal");
}

GuildTerminal::GuildTerminal(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("GuildTerminal");
}

GuildTerminal::~GuildTerminal() {
}



void GuildTerminal::initializeTransientMembers() {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void GuildTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->fillObjectMenuResponse(menuResponse, player);
	}
}

int GuildTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

bool GuildTerminal::isGuildTerminal() {
	GuildTerminalImplementation* _implementation = static_cast<GuildTerminalImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISGUILDTERMINAL__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isGuildTerminal();
	}
}

DistributedObjectServant* GuildTerminal::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* GuildTerminal::_getImplementationForRead() const {
	return _impl;
}

void GuildTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	GuildTerminalImplementation
 */

GuildTerminalImplementation::GuildTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


GuildTerminalImplementation::~GuildTerminalImplementation() {
}


void GuildTerminalImplementation::finalize() {
}

void GuildTerminalImplementation::_initializeImplementation() {
	_setClassHelper(GuildTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void GuildTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<GuildTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* GuildTerminalImplementation::_getStub() {
	return _this.get();
}

GuildTerminalImplementation::operator const GuildTerminal*() {
	return _this.get();
}

void GuildTerminalImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void GuildTerminalImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void GuildTerminalImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void GuildTerminalImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void GuildTerminalImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void GuildTerminalImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void GuildTerminalImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void GuildTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("GuildTerminal");

}

void GuildTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(GuildTerminalImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool GuildTerminalImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void GuildTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = GuildTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int GuildTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

GuildTerminalImplementation::GuildTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		Logger.setLoggingName("GuildTerminal");
	Logger::setLoggingName("GuildTerminal");
}

void GuildTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		Logger.setLoggingName("GuildTerminal");
	Logger::setLoggingName("GuildTerminal");
}

bool GuildTerminalImplementation::isGuildTerminal() {
	// server/zone/objects/tangible/terminal/guild/GuildTerminal.idl():  		return true;
	return true;
}

/*
 *	GuildTerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


GuildTerminalAdapter::GuildTerminalAdapter(GuildTerminal* obj) : TerminalAdapter(obj) {
}

void GuildTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_FILLOBJECTMENURESPONSE__OBJECTMENURESPONSE_CREATUREOBJECT_:
		{
			ObjectMenuResponse* menuResponse = static_cast<ObjectMenuResponse*>(inv->getObjectParameter());
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			fillObjectMenuResponse(menuResponse, player);
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_ISGUILDTERMINAL__:
		{
			
			bool _m_res = isGuildTerminal();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TerminalAdapter::invokeMethod(methid, inv);
	}
}

void GuildTerminalAdapter::initializeTransientMembers() {
	(static_cast<GuildTerminal*>(stub))->initializeTransientMembers();
}

void GuildTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	(static_cast<GuildTerminal*>(stub))->fillObjectMenuResponse(menuResponse, player);
}

int GuildTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<GuildTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

bool GuildTerminalAdapter::isGuildTerminal() {
	return (static_cast<GuildTerminal*>(stub))->isGuildTerminal();
}

/*
 *	GuildTerminalHelper
 */

GuildTerminalHelper* GuildTerminalHelper::staticInitializer = GuildTerminalHelper::instance();

GuildTerminalHelper::GuildTerminalHelper() {
	className = "GuildTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void GuildTerminalHelper::finalizeHelper() {
	GuildTerminalHelper::finalize();
}

DistributedObject* GuildTerminalHelper::instantiateObject() {
	return new GuildTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* GuildTerminalHelper::instantiateServant() {
	return new GuildTerminalImplementation();
}

DistributedObjectAdapter* GuildTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GuildTerminalAdapter(static_cast<GuildTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
