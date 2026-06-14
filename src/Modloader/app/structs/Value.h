#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Value_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Value_INITIALIZING
#if !defined(IL2CPP_STRUCT_Value_DEFINED)
#include <Modloader/app/structs/Value__Fields.h>
#if defined(IL2CPP_STRUCT_Value__Fields_DEFINED)
#define IL2CPP_STRUCT_Value_DEFINED
struct Value__Class;
struct Value {
    struct Value__Class* klass;
    MonitorData* monitor;
    struct Value__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Value_FWDDECL)
#define IL2CPP_STRUCT_Value_FWDDECL
#include <Modloader/app/structs/Value__Class.h>
#endif
#undef IL2CPP_STRUCT_Value_INITIALIZING
#if !defined(IL2CPP_STRUCT_Value_DEFINED) && !defined(IL2CPP_STRUCT_Value_FWDDECL)
#include <Modloader/app/structs/Value.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Value.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
