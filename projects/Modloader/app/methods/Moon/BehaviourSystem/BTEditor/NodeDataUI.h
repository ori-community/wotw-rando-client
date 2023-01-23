#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/NodeDataUI.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::BTEditor::NodeDataUI {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::BehaviourNode*, get_Node, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ID, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ID, (app::NodeDataUI * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsCollapsed, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_IsCollapsed, (app::NodeDataUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E71230, app::Vector2, get_Position, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_Position, (app::NodeDataUI * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x010655D0, app::Vector2, get_Size, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010655F0, void, set_Size, (app::NodeDataUI * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x031C07D0, app::Rect, get_Rect, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_Rect, (app::NodeDataUI * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::Color, get_NodeColor, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060A8A0, void, set_NodeColor, (app::NodeDataUI * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Name, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Name, (app::NodeDataUI * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_Comments, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Comments, (app::NodeDataUI * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x031C0820, void, ctor_1, (app::NodeDataUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0840, void, ctor_2, (app::NodeDataUI * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x031C0860, void, ctor_3, (app::NodeDataUI * this_ptr, int32_t id, app::BehaviourNode* node))
    IL2CPP_REGISTER_METHOD(0x031C0890, void, Update, (app::NodeDataUI * this_ptr, app::NodeDataUI* source))
} // namespace app::classes::Moon::BehaviourSystem::BTEditor::NodeDataUI
