#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeySequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeySequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySequence__Fields_DEFINED)
#define IL2CPP_STRUCT_KeySequence__Fields_DEFINED
struct TypedObject__Array;
struct __declspec(align(8)) KeySequence__Fields {
    struct TypedObject__Array* ks;
    int32_t dim;
    int32_t hashcode;
    int32_t posline;
    int32_t poscol;
};
#endif
#if !defined(IL2CPP_STRUCT_KeySequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeySequence__Fields_FWDDECL
#include <Modloader/app/structs/TypedObject__Array.h>
#endif
#undef IL2CPP_STRUCT_KeySequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeySequence__Fields_FWDDECL)
#include <Modloader/app/structs/KeySequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeySequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
