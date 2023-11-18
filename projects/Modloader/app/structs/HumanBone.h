#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HumanBone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HumanBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanBone_DEFINED)
#include <Modloader/app/structs/HumanLimit.h>
#if defined(IL2CPP_STRUCT_HumanLimit_DEFINED)
#define IL2CPP_STRUCT_HumanBone_DEFINED
struct String;
struct HumanBone {
    struct String* m_BoneName;
    struct String* m_HumanName;
    struct HumanLimit limit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HumanBone_FWDDECL)
#define IL2CPP_STRUCT_HumanBone_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HumanBone_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanBone_DEFINED) && !defined(IL2CPP_STRUCT_HumanBone_FWDDECL)
#include <Modloader/app/structs/HumanBone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HumanBone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
