#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RandTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRandomGroupID
		#define GEODE_STATICS_getRandomGroupID
		GEODE_AS_STATIC_FUNCTION(getRandomGroupID) 
	#endif

	#ifndef GEODE_STATICS_getTotalChance
		#define GEODE_STATICS_getTotalChance
		GEODE_AS_STATIC_FUNCTION(getTotalChance) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RandTriggerGameObject> : ModifyBase<ModifyDerive<Der, RandTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, RandTriggerGameObject>>::ModifyBase;
		using Base = RandTriggerGameObject;
        using Derived = Der;
		void apply() override {

		}
	};
}
