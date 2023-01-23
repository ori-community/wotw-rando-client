#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UIBehaviour.h>

namespace app::classes::UnityEngine::EventSystems::UIBehaviour {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2A910, bool, IsActive, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRectTransformDimensionsChange, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeTransformParentChanged, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTransformParentChanged, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDidApplyAnimationProperties, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCanvasGroupChanged, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCanvasHierarchyChanged, (app::UIBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2A960, bool, IsDestroyed, (app::UIBehaviour * this_ptr))
} // namespace app::classes::UnityEngine::EventSystems::UIBehaviour
