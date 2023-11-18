#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VirtualClipsBuilder.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VirtualClipsBuilder_BuilderScope.h>
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>

namespace app::classes::VirtualClipsBuilder {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_AddedChildren, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_AddedChildren, (app::VirtualClipsBuilder * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::VirtualMoonTimeline*, get_Root, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E969C0, app::VirtualClipsBuilder_BuilderScope*, get_CurrentScope, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E96AA0, float, get_CurrentHorizontalOffset, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E96AD0, int32_t, get_IndentLevel, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E96AF0, void, set_IndentLevel, (app::VirtualClipsBuilder * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E96B20, void, ctor, (app::VirtualClipsBuilder * this_ptr, app::VirtualMoonTimeline* root, float base_clip_lenght))
    IL2CPP_REGISTER_METHOD(0x01E96D90, app::VirtualClipsBuilder*, SetClipsBaseLenght, (app::VirtualClipsBuilder * this_ptr, float lenght))
    IL2CPP_REGISTER_METHOD(0x01E96DA0, app::VirtualClipsBuilder*, AddClip, (app::VirtualClipsBuilder * this_ptr, app::ITimelineEntity* entity, float lenght_multiplier, bool register_as_last_clip))
    IL2CPP_REGISTER_METHOD(0x01E97120, void, SetupConstraintsVertical, (app::VirtualClipsBuilder * this_ptr, app::ITimelineEntity* entity, float lenght))
    IL2CPP_REGISTER_METHOD(0x01E972B0, void, SetupConstraintsHorizontal, (app::VirtualClipsBuilder * this_ptr, app::EntityId entity_id, float lenght))
    IL2CPP_REGISTER_METHOD(0x01E97500, void, SetupConstraintsForBlock, (app::VirtualClipsBuilder * this_ptr, app::ITimelineEntity* entity, app::EntityId id, float lenght))
    IL2CPP_REGISTER_METHOD(0x01E97740, app::VirtualClipsBuilder*, StartGroup_1, (app::VirtualClipsBuilder * this_ptr, app::String* group_name, bool expand_by_default, bool should_hide_header, bool use_horizontal_collapse))
    IL2CPP_REGISTER_METHOD(0x01E978E0, app::VirtualClipsBuilder*, StartGroup_2, (app::VirtualClipsBuilder * this_ptr, app::VirtualTimelineRepresentationGroup__Enum group_type, bool expand_by_default))
    IL2CPP_REGISTER_METHOD(0x01E97B10, app::VirtualClipsBuilder*, StartGroup_3, (app::VirtualClipsBuilder * this_ptr, app::VirtualMoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x01E97CA0, app::VirtualClipsBuilder*, EndGroup, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97D80, app::VirtualClipsBuilder*, StartVertical, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97DC0, app::VirtualClipsBuilder*, EndVertical, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97E00, app::VirtualClipsBuilder*, StartHorizontal, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97E40, app::VirtualClipsBuilder*, EndHorizontal, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97EB0, app::VirtualClipsBuilder*, StartBlock, (app::VirtualClipsBuilder * this_ptr, int32_t block_size))
    IL2CPP_REGISTER_METHOD(0x01E97EF0, app::VirtualClipsBuilder*, EndBlock, (app::VirtualClipsBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E97F30, app::VirtualClipsBuilder*, Attach, (app::VirtualClipsBuilder * this_ptr, app::ITimelineEntity* attached, app::ITimelineEntity* holder))
} // namespace app::classes::VirtualClipsBuilder
