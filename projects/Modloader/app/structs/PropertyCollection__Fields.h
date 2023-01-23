#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyCollection__Fields_DEFINED)
#include <Modloader/app/structs/Hashtable__Fields.h>
#if defined(IL2CPP_STRUCT_Hashtable__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyCollection__Fields_DEFINED
struct PropertyCollection__Fields {
    struct Hashtable__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_PropertyCollection__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PropertyCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PropertyCollection__Fields_FWDDECL)
#include <Modloader/app/structs/PropertyCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
