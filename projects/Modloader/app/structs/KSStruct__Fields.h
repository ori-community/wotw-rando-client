#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KSStruct__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KSStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KSStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_KSStruct__Fields_DEFINED
struct KeySequence;
struct LocatedActiveAxis__Array;
struct __declspec(align(8)) KSStruct__Fields {
    int32_t depth;
    struct KeySequence* ks;
    struct LocatedActiveAxis__Array* fields;
};
#endif
#if !defined(IL2CPP_STRUCT_KSStruct__Fields_FWDDECL)
#define IL2CPP_STRUCT_KSStruct__Fields_FWDDECL
#include <Modloader/app/structs/KeySequence.h>
#include <Modloader/app/structs/LocatedActiveAxis__Array.h>
#endif
#undef IL2CPP_STRUCT_KSStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KSStruct__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KSStruct__Fields_FWDDECL)
#include <Modloader/app/structs/KSStruct__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KSStruct__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
