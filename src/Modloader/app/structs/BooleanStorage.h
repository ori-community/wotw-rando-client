#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanStorage_DEFINED)
#include <Modloader/app/structs/BooleanStorage__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanStorage_DEFINED
struct BooleanStorage__Class;
struct BooleanStorage {
    struct BooleanStorage__Class* klass;
    MonitorData* monitor;
    struct BooleanStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanStorage_FWDDECL)
#define IL2CPP_STRUCT_BooleanStorage_FWDDECL
#include <Modloader/app/structs/BooleanStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanStorage_DEFINED) && !defined(IL2CPP_STRUCT_BooleanStorage_FWDDECL)
#include <Modloader/app/structs/BooleanStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
