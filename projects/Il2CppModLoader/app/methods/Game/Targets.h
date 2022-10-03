#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Game::Targets {
    IL2CPP_REGISTER_METHOD(0x00682C30, app::IEnumerable_1_IAttackable_*, get_Attackables, ())
    IL2CPP_REGISTER_METHOD(0x00682DB0, void, AdjustAttackableIteratorsForRemovedAttackable, (int32_t removed_index))
    IL2CPP_REGISTER_METHOD(0x00682F30, void, RegisterAttackableConsumer, (app::IAttackableConsumer * consumer))
    IL2CPP_REGISTER_METHOD(0x00683360, void, UnregisterAttackableConsumer, (app::IAttackableConsumer * consumer))
    IL2CPP_REGISTER_METHOD(0x006836C0, void, InitAttackablesList, (app::List_1_IAttackable_ * list, app::IAttackableConsumer* consumer))
    IL2CPP_REGISTER_METHOD(0x006838C0, void, AddToConsumerLists, (app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00683A80, void, RemoveFromConsumerLists, (app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00683C40, app::List_1_IAttackable_*, GetAttackableConsumerList, (app::IAttackableConsumer * consumer))
    IL2CPP_REGISTER_METHOD(0x00683E10, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006840F0, void, AddAttackable, (app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00684210, bool, RemoveAttackable, (app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00684370, void, cctor, ())
} // namespace app::classes::Game::Targets
