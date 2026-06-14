#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionObject_DEFINED)
#include <Modloader/app/structs/ReflectionObject__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionObject_DEFINED
struct ReflectionObject__Class;
struct ReflectionObject {
    struct ReflectionObject__Class* klass;
    MonitorData* monitor;
    struct ReflectionObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionObject_FWDDECL)
#define IL2CPP_STRUCT_ReflectionObject_FWDDECL
#include <Modloader/app/structs/ReflectionObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionObject_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionObject_FWDDECL)
#include <Modloader/app/structs/ReflectionObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
