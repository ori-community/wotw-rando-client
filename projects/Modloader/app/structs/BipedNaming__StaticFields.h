#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedNaming__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedNaming__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedNaming__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BipedNaming__StaticFields_DEFINED
struct String__Array;
struct BipedNaming__StaticFields {
    struct String__Array* typeLeft;
    struct String__Array* typeRight;
    struct String__Array* typeSpine;
    struct String__Array* typeHead;
    struct String__Array* typeArm;
    struct String__Array* typeLeg;
    struct String__Array* typeTail;
    struct String__Array* typeEye;
    struct String__Array* typeExclude;
    struct String__Array* typeExcludeSpine;
    struct String__Array* typeExcludeHead;
    struct String__Array* typeExcludeArm;
    struct String__Array* typeExcludeLeg;
    struct String__Array* typeExcludeTail;
    struct String__Array* typeExcludeEye;
    struct String__Array* pelvis;
    struct String__Array* hand;
    struct String__Array* foot;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedNaming__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BipedNaming__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_BipedNaming__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedNaming__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BipedNaming__StaticFields_FWDDECL)
#include <Modloader/app/structs/BipedNaming__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedNaming__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
