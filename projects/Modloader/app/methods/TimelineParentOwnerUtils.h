#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VirtualClipsBuilder.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TimelineParentOwnerUtils.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/Func_2_Moon_Timeline_MoonTimeline_Boolean_.h>
#include <Modloader/app/structs/List_1_IVirtualTimelineGameObject_.h>
#include <Modloader/app/structs/Func_2_IVirtualTimelineGameObject_Boolean_.h>

namespace app::classes::TimelineParentOwnerUtils {
    IL2CPP_REGISTER_METHOD(0x01E947F0, void, AddChildrenTimelines, (app::GameObject * source, app::VirtualClipsBuilder* builder, bool add_state_requirements))
    IL2CPP_REGISTER_METHOD(0x01E94CF0, void, AddGenericGameObjectClipsFromChildren, (app::GameObject * source, app::VirtualClipsBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x01E959C0, bool, IsRootTimeline, (app::GameObject * timeline))
    IL2CPP_REGISTER_METHOD(0x01E95CC0, int32_t, CountChildren, (app::Transform * root))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimelineParentOwnerUtils * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E95E60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren_1, (app::Transform * source, app::List_1_System_Object_* result, app::Func_2_Object_Boolean_* condition))
    IL2CPP_REGISTER_METHOD(0x015E2CC0, void, AddGameobjectClipsFromChildren, (app::GameObject * source, app::VirtualClipsBuilder* builder, bool name_by_type))
    IL2CPP_REGISTER_METHOD(0x015E2790, void, AddExternalGroup_1, (app::VirtualTimelineRepresentationGroup__Enum group, app::GameObject* source, app::VirtualClipsBuilder* builder, bool expand_by_default, int32_t block_size))
    IL2CPP_REGISTER_METHOD(0x015E2280, void, AddExternalGroup_2, (app::String * name, app::GameObject* source, app::VirtualClipsBuilder* builder, bool expand_by_default))
    IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren_2, (app::Transform * source, app::List_1_Moon_Timeline_MoonTimeline_* result, app::Func_2_Moon_Timeline_MoonTimeline_Boolean_* condition))
    IL2CPP_REGISTER_METHODINFO(0x0473F3C8, TimelineParentOwnerUtils_CollectComponentsInChildren_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren_3, (app::Transform * source, app::List_1_IVirtualTimelineGameObject_* result, app::Func_2_IVirtualTimelineGameObject_Boolean_* condition))
    IL2CPP_REGISTER_METHODINFO(0x04701D70, TimelineParentOwnerUtils_CollectComponentsInChildren_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E2790, void, AddExternalGroup_3, (app::VirtualTimelineRepresentationGroup__Enum group, app::GameObject* source, app::VirtualClipsBuilder* builder, bool expand_by_default, int32_t block_size))
    IL2CPP_REGISTER_METHODINFO(0x0476E2E0, TimelineParentOwnerUtils_AddExternalGroup_2__MethodInfo)
} // namespace app::classes::TimelineParentOwnerUtils
