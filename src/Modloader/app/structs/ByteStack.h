#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByteStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByteStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStack_DEFINED)
#include <Modloader/app/structs/ByteStack__Fields.h>
#if defined(IL2CPP_STRUCT_ByteStack__Fields_DEFINED)
#define IL2CPP_STRUCT_ByteStack_DEFINED
struct ByteStack__Class;
struct ByteStack {
    struct ByteStack__Class* klass;
    MonitorData* monitor;
    struct ByteStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByteStack_FWDDECL)
#define IL2CPP_STRUCT_ByteStack_FWDDECL
#include <Modloader/app/structs/ByteStack__Class.h>
#endif
#undef IL2CPP_STRUCT_ByteStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByteStack_DEFINED) && !defined(IL2CPP_STRUCT_ByteStack_FWDDECL)
#include <Modloader/app/structs/ByteStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByteStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
