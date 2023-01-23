#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryMethodReturn_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryMethodReturn_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn_DEFINED)
#include <Modloader/app/structs/BinaryMethodReturn__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryMethodReturn__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryMethodReturn_DEFINED
struct BinaryMethodReturn__Class;
struct BinaryMethodReturn {
    struct BinaryMethodReturn__Class* klass;
    MonitorData* monitor;
    struct BinaryMethodReturn__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn_FWDDECL)
#define IL2CPP_STRUCT_BinaryMethodReturn_FWDDECL
#include <Modloader/app/structs/BinaryMethodReturn__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryMethodReturn_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn_DEFINED) && !defined(IL2CPP_STRUCT_BinaryMethodReturn_FWDDECL)
#include <Modloader/app/structs/BinaryMethodReturn.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryMethodReturn.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
