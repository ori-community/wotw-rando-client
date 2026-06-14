#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueType_DEFINED)
#define IL2CPP_STRUCT_ValueType_DEFINED
struct ValueType__Class;
struct ValueType {
    struct ValueType__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ValueType_FWDDECL)
#define IL2CPP_STRUCT_ValueType_FWDDECL
#include <Modloader/app/structs/ValueType__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueType_DEFINED) && !defined(IL2CPP_STRUCT_ValueType_FWDDECL)
#include <Modloader/app/structs/ValueType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
