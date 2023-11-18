#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComVisibleAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComVisibleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComVisibleAttribute_DEFINED)
#include <Modloader/app/structs/ComVisibleAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ComVisibleAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ComVisibleAttribute_DEFINED
struct ComVisibleAttribute__Class;
struct ComVisibleAttribute {
    struct ComVisibleAttribute__Class* klass;
    MonitorData* monitor;
    struct ComVisibleAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComVisibleAttribute_FWDDECL)
#define IL2CPP_STRUCT_ComVisibleAttribute_FWDDECL
#include <Modloader/app/structs/ComVisibleAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ComVisibleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComVisibleAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ComVisibleAttribute_FWDDECL)
#include <Modloader/app/structs/ComVisibleAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComVisibleAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
