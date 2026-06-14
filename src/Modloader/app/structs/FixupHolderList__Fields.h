#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixupHolderList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixupHolderList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolderList__Fields_DEFINED)
#define IL2CPP_STRUCT_FixupHolderList__Fields_DEFINED
struct FixupHolder__Array;
struct __declspec(align(8)) FixupHolderList__Fields {
    struct FixupHolder__Array* m_values;
    int32_t m_count;
};
#endif
#if !defined(IL2CPP_STRUCT_FixupHolderList__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixupHolderList__Fields_FWDDECL
#include <Modloader/app/structs/FixupHolder__Array.h>
#endif
#undef IL2CPP_STRUCT_FixupHolderList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixupHolderList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixupHolderList__Fields_FWDDECL)
#include <Modloader/app/structs/FixupHolderList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixupHolderList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
