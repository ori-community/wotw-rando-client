#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryMethodCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryMethodCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodCall_DEFINED)
#include <Modloader/app/structs/BinaryMethodCall__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryMethodCall__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryMethodCall_DEFINED
struct BinaryMethodCall__Class;
struct BinaryMethodCall {
    struct BinaryMethodCall__Class* klass;
    MonitorData* monitor;
    struct BinaryMethodCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryMethodCall_FWDDECL)
#define IL2CPP_STRUCT_BinaryMethodCall_FWDDECL
#include <Modloader/app/structs/BinaryMethodCall__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryMethodCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodCall_DEFINED) && !defined(IL2CPP_STRUCT_BinaryMethodCall_FWDDECL)
#include <Modloader/app/structs/BinaryMethodCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryMethodCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
