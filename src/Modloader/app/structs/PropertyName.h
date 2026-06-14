#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyName_DEFINED)
#define IL2CPP_STRUCT_PropertyName_DEFINED
struct PropertyName {
    int32_t id;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyName_FWDDECL)
#define IL2CPP_STRUCT_PropertyName_FWDDECL
#endif
#undef IL2CPP_STRUCT_PropertyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyName_DEFINED) && !defined(IL2CPP_STRUCT_PropertyName_FWDDECL)
#include <Modloader/app/structs/PropertyName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
