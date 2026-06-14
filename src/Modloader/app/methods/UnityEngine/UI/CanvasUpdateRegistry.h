#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanvasUpdateRegistry.h>
#include <Modloader/app/structs/ICanvasElement.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UnityEngine::UI::CanvasUpdateRegistry {
    IL2CPP_REGISTER_METHOD(0x01F2CEB0, void, ctor, app::CanvasUpdateRegistry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2D260, app::CanvasUpdateRegistry*, get_instance, )
    IL2CPP_REGISTER_METHOD(0x01F2D450, bool, ObjectValidForUpdate, app::CanvasUpdateRegistry* this_ptr, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2D590, void, CleanInvalidItems, app::CanvasUpdateRegistry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2D830, void, PerformUpdate, app::CanvasUpdateRegistry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2E230, int32_t, ParentCount, app::Transform* child)
    IL2CPP_REGISTER_METHOD(0x01F2E3B0, int32_t, SortLayoutList, app::ICanvasElement* x, app::ICanvasElement* y)
    IL2CPP_REGISTER_METHOD(0x01F2E4B0, void, RegisterCanvasElementForLayoutRebuild, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E560, bool, TryRegisterCanvasElementForLayoutRebuild, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E610, bool, InternalRegisterCanvasElementForLayoutRebuild, app::CanvasUpdateRegistry* this_ptr, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E700, void, RegisterCanvasElementForGraphicRebuild, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E7B0, bool, TryRegisterCanvasElementForGraphicRebuild, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E860, bool, InternalRegisterCanvasElementForGraphicRebuild, app::CanvasUpdateRegistry* this_ptr, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2E990, void, UnRegisterCanvasElementForRebuild, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(0x01F2ED00, void, InternalUnRegisterCanvasElementForLayoutRebuild, app::CanvasUpdateRegistry* this_ptr, app::ICanvasElement* element)
    IL2CPP_REGISTER_METHOD(
        0x01F2EE90,
        void,
        InternalUnRegisterCanvasElementForGraphicRebuild,
        app::CanvasUpdateRegistry* this_ptr,
        app::ICanvasElement* element
    )
    IL2CPP_REGISTER_METHOD(0x01F2F020, bool, IsRebuildingLayout, )
    IL2CPP_REGISTER_METHOD(0x01F2F0C0, bool, IsRebuildingGraphics, )
    IL2CPP_REGISTER_METHOD(0x01F2F160, void, cctor, )
} // namespace app::classes::UnityEngine::UI::CanvasUpdateRegistry
