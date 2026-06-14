#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/Characters.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/Ori.h>
#include <Modloader/app/structs/SeinCharacter.h>

namespace app::classes::Game::Characters {
    IL2CPP_REGISTER_METHOD(0x01522590, app::SeinCharacter*, get_Sein, )
    IL2CPP_REGISTER_METHOD(0x01522630, void, set_Sein, app::SeinCharacter* value)
    IL2CPP_REGISTER_METHOD(0x01522790, app::BabySein*, get_BabySein, )
    IL2CPP_REGISTER_METHOD(0x01522830, void, set_BabySein, app::BabySein* value)
    IL2CPP_REGISTER_METHOD(0x01522990, app::Naru*, get_Naru, )
    IL2CPP_REGISTER_METHOD(0x01522A30, void, set_Naru, app::Naru* value)
    IL2CPP_REGISTER_METHOD(0x01522B90, app::Ku*, get_Ku, )
    IL2CPP_REGISTER_METHOD(0x01522C30, void, set_Ku, app::Ku* value)
    IL2CPP_REGISTER_METHOD(0x01522D90, app::ICharacter*, get_Current, )
    IL2CPP_REGISTER_METHOD(0x01522E30, void, set_Current, app::ICharacter* value)
    IL2CPP_REGISTER_METHOD(0x01522EE0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01522FF0, void, SetCurrentCharacter, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x015231B0, void, ClearIfCurrentCharacter, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x01523280, void, ClearCurrentCharacter, )
    IL2CPP_REGISTER_METHOD(0x01523330, app::Ori*, get_Ori, )
    IL2CPP_REGISTER_METHOD(0x015233D0, void, set_Ori, app::Ori* value)
    IL2CPP_REGISTER_METHOD(0x015234D0, void, ResetStatics2, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Characters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Game::Characters
