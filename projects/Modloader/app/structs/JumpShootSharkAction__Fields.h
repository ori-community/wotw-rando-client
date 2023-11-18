#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpShootSharkAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpShootSharkAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootSharkAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/JumpShootSharkAction_ActionType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_JumpShootSharkAction_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_JumpShootSharkAction__Fields_DEFINED
struct JumpShootSharkPlaceholder;
struct Transform;
struct JumpShootSharkAction__Fields {
    struct ActionMethod__Fields _;
    struct JumpShootSharkPlaceholder* JumpShootShark;
    JumpShootSharkAction_ActionType__Enum Action;

    struct Transform* Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpShootSharkAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpShootSharkAction__Fields_FWDDECL
#include <Modloader/app/structs/JumpShootSharkPlaceholder.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_JumpShootSharkAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootSharkAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpShootSharkAction__Fields_FWDDECL)
#include <Modloader/app/structs/JumpShootSharkAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpShootSharkAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
