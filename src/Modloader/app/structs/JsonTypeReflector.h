#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTypeReflector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTypeReflector_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTypeReflector_DEFINED)
#define IL2CPP_STRUCT_JsonTypeReflector_DEFINED
struct JsonTypeReflector__Class;
struct JsonTypeReflector {
    struct JsonTypeReflector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonTypeReflector_FWDDECL)
#define IL2CPP_STRUCT_JsonTypeReflector_FWDDECL
#include <Modloader/app/structs/JsonTypeReflector__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonTypeReflector_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTypeReflector_DEFINED) && !defined(IL2CPP_STRUCT_JsonTypeReflector_FWDDECL)
#include <Modloader/app/structs/JsonTypeReflector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTypeReflector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
