#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::EventHandlerList {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::EventHandlerList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_2, (app::EventHandlerList * this_ptr, app::Component* parent))
    IL2CPP_REGISTER_METHOD(0x01FEC3F0, app::Delegate*, get_Item, (app::EventHandlerList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01FEC460, void, set_Item, (app::EventHandlerList * this_ptr, app::Object* key, app::Delegate* value))
    IL2CPP_REGISTER_METHOD(0x01FEC5F0, void, AddHandler, (app::EventHandlerList * this_ptr, app::Object* key, app::Delegate* value))
    IL2CPP_REGISTER_METHOD(0x01FEC790, void, AddHandlers, (app::EventHandlerList * this_ptr, app::EventHandlerList* list_to_add_from))
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose, (app::EventHandlerList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEC9D0, app::EventHandlerList_ListEntry*, Find, (app::EventHandlerList * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01FECA00, void, RemoveHandler, (app::EventHandlerList * this_ptr, app::Object* key, app::Delegate* value))
} // namespace app::classes::System::ComponentModel::EventHandlerList
