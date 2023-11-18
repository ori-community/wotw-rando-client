#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAttributeWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAttributeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttributeWrapper_DEFINED)
#include <Modloader/app/structs/XAttributeWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XAttributeWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XAttributeWrapper_DEFINED
struct XAttributeWrapper__Class;
struct XAttributeWrapper {
    struct XAttributeWrapper__Class* klass;
    MonitorData* monitor;
    struct XAttributeWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAttributeWrapper_FWDDECL)
#define IL2CPP_STRUCT_XAttributeWrapper_FWDDECL
#include <Modloader/app/structs/XAttributeWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XAttributeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttributeWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XAttributeWrapper_FWDDECL)
#include <Modloader/app/structs/XAttributeWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAttributeWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
