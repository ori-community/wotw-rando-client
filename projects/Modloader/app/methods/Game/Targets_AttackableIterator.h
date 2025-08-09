#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Targets_AttackableIterator.h>

namespace app::classes::Game::Targets_AttackableIterator {
    IL2CPP_REGISTER_METHOD(0x00684EA0, app::Targets_AttackableIterator*, Allocate, )
    IL2CPP_REGISTER_METHOD(0x006850B0, void, Free, app::Targets_AttackableIterator* i)
    IL2CPP_REGISTER_METHOD(0x00685190, void, Clear, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Targets_AttackableIterator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00685270, void, cctor, )
} // namespace app::classes::Game::Targets_AttackableIterator
