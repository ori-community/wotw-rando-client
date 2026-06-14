#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueWithMaxValueSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueWithMaxValueSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithMaxValueSerializer_DEFINED)
#include <Modloader/app/structs/ValueWithMaxValueSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_ValueWithMaxValueSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueWithMaxValueSerializer_DEFINED
struct ValueWithMaxValueSerializer__Class;
struct ValueWithMaxValueSerializer {
    struct ValueWithMaxValueSerializer__Class* klass;
    MonitorData* monitor;
    struct ValueWithMaxValueSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueWithMaxValueSerializer_FWDDECL)
#define IL2CPP_STRUCT_ValueWithMaxValueSerializer_FWDDECL
#include <Modloader/app/structs/ValueWithMaxValueSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueWithMaxValueSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueWithMaxValueSerializer_DEFINED) && !defined(IL2CPP_STRUCT_ValueWithMaxValueSerializer_FWDDECL)
#include <Modloader/app/structs/ValueWithMaxValueSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueWithMaxValueSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
