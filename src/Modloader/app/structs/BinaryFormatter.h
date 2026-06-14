#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryFormatter_DEFINED)
#include <Modloader/app/structs/BinaryFormatter__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryFormatter_DEFINED
struct BinaryFormatter__Class;
struct BinaryFormatter {
    struct BinaryFormatter__Class* klass;
    MonitorData* monitor;
    struct BinaryFormatter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryFormatter_FWDDECL)
#define IL2CPP_STRUCT_BinaryFormatter_FWDDECL
#include <Modloader/app/structs/BinaryFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryFormatter_DEFINED) && !defined(IL2CPP_STRUCT_BinaryFormatter_FWDDECL)
#include <Modloader/app/structs/BinaryFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
