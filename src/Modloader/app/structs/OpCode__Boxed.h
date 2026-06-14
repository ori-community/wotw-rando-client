#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpCode__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpCode__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCode__Boxed_DEFINED)
#include <Modloader/app/structs/OpCode.h>
#if defined(IL2CPP_STRUCT_OpCode_DEFINED)
#define IL2CPP_STRUCT_OpCode__Boxed_DEFINED
struct OpCode__Class;
struct OpCode__Boxed {
    struct OpCode__Class* klass;
    MonitorData* monitor;
    struct OpCode fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpCode__Boxed_FWDDECL)
#define IL2CPP_STRUCT_OpCode__Boxed_FWDDECL
#include <Modloader/app/structs/OpCode__Class.h>
#endif
#undef IL2CPP_STRUCT_OpCode__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpCode__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_OpCode__Boxed_FWDDECL)
#include <Modloader/app/structs/OpCode__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpCode__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
