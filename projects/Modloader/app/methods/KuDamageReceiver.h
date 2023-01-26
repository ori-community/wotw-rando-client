#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KuDamageReceiver.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KuDamageReceiver {
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Ku*, get_Ku, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122F570, app::SeinCharacter*, get_Sein, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetReferenceToKu, (app::KuDamageReceiver * this_ptr, app::Ku* ku))
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122F600, void, OnEnable, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122F7E0, void, OnDisable, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0122F9C0, void, OnOriDamage, (app::KuDamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x0122FFC0, void, OnRootMotion, (app::KuDamageReceiver * this_ptr, app::Vector3 root_motion))
    IL2CPP_REGISTER_METHOD(0x01230150, void, OnAnimationEnd, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01230300, void, OnRecieveDamage, (app::KuDamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x01230450, bool, ShouldHurtAnimationKeepPlaying, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012304A0, void, ctor, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::KuDamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::KuDamageReceiver * this_ptr))
} // namespace app::classes::KuDamageReceiver
