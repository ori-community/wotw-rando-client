#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XMLHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XMLHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLHelper_DEFINED)
#define IL2CPP_STRUCT_XMLHelper_DEFINED
struct XMLHelper__Class;
struct XMLHelper {
    struct XMLHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XMLHelper_FWDDECL)
#define IL2CPP_STRUCT_XMLHelper_FWDDECL
#include <Modloader/app/structs/XMLHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_XMLHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLHelper_DEFINED) && !defined(IL2CPP_STRUCT_XMLHelper_FWDDECL)
#include <Modloader/app/structs/XMLHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XMLHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
