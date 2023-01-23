#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObject_DEFINED)
#include <Modloader/app/structs/BinaryObject__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryObject_DEFINED
struct BinaryObject__Class;
struct BinaryObject {
    struct BinaryObject__Class* klass;
    MonitorData* monitor;
    struct BinaryObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObject_FWDDECL)
#define IL2CPP_STRUCT_BinaryObject_FWDDECL
#include <Modloader/app/structs/BinaryObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObject_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObject_FWDDECL)
#include <Modloader/app/structs/BinaryObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
