#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::BipedNaming {
    IL2CPP_REGISTER_METHOD(0x021FCD40, app::Transform__Array*, GetBonesOfType, (app::BipedNaming_BoneType__Enum bone_type, app::Transform__Array* bones))
    IL2CPP_REGISTER_METHOD(0x021FCF20, app::Transform__Array*, GetBonesOfSide, (app::BipedNaming_BoneSide__Enum bone_side, app::Transform__Array* bones))
    IL2CPP_REGISTER_METHOD(0x021FD100, app::Transform__Array*, GetBonesOfTypeAndSide, (app::BipedNaming_BoneType__Enum bone_type, app::BipedNaming_BoneSide__Enum bone_side, app::Transform__Array* bones))
    IL2CPP_REGISTER_METHOD(0x021FD1C0, app::Transform*, GetFirstBoneOfTypeAndSide, (app::BipedNaming_BoneType__Enum bone_type, app::BipedNaming_BoneSide__Enum bone_side, app::Transform__Array* bones))
    IL2CPP_REGISTER_METHOD(0x021FD2C0, app::Transform*, GetNamingMatch, (app::Transform__Array * transforms, app::String__Array__Array* namings))
    IL2CPP_REGISTER_METHOD(0x021FD450, app::BipedNaming_BoneType__Enum, GetBoneType, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FDB50, app::BipedNaming_BoneSide__Enum, GetBoneSide, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FDC30, app::Transform*, GetBone, (app::Transform__Array * transforms, app::BipedNaming_BoneType__Enum bone_type, app::BipedNaming_BoneSide__Enum bone_side, app::String__Array__Array* namings))
    IL2CPP_REGISTER_METHOD(0x021FDD00, bool, isLeft, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FDE70, bool, isRight, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FDFE0, bool, isSpine, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE0E0, bool, isHead, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE1E0, bool, isArm, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE2E0, bool, isLeg, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE3E0, bool, isTail, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE4E0, bool, isEye, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE5E0, bool, isTypeExclude, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FE690, bool, matchesNaming, (app::String * bone_name, app::String__Array* naming_convention))
    IL2CPP_REGISTER_METHOD(0x021FE7D0, bool, excludesNaming, (app::String * bone_name, app::String__Array* naming_convention))
    IL2CPP_REGISTER_METHOD(0x021FE870, bool, matchesLastLetter, (app::String * bone_name, app::String__Array* naming_convention))
    IL2CPP_REGISTER_METHOD(0x021FE970, bool, LastLetterIs, (app::String * bone_name, app::String* letter))
    IL2CPP_REGISTER_METHOD(0x021FE9D0, app::String*, firstLetter, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FEA70, app::String*, lastLetter, (app::String * bone_name))
    IL2CPP_REGISTER_METHOD(0x021FEB10, void, cctor, ())
} // namespace app::classes::RootMotion::BipedNaming
