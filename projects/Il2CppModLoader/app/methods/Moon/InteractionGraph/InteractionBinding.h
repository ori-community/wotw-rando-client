#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionBinding {
    IL2CPP_REGISTER_METHOD(0x0198D3F0, app::IMessageProvider *, get_ResolvedMessageProvider, (app::InteractionBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Active, (app::InteractionBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Active, (app::InteractionBinding * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0198D480, void, ctor, (app::InteractionBinding * this_ptr, app::Action * action, app::IMessageProvider * message_provider, float cost))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_ShouldUse, (app::InteractionBinding * this_ptr))
}
