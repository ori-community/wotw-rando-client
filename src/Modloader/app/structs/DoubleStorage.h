#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleStorage_DEFINED)
#include <Modloader/app/structs/DoubleStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DoubleStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleStorage_DEFINED
struct DoubleStorage__Class;
struct DoubleStorage {
    struct DoubleStorage__Class* klass;
    MonitorData* monitor;
    struct DoubleStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleStorage_FWDDECL)
#define IL2CPP_STRUCT_DoubleStorage_FWDDECL
#include <Modloader/app/structs/DoubleStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_DoubleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleStorage_DEFINED) && !defined(IL2CPP_STRUCT_DoubleStorage_FWDDECL)
#include <Modloader/app/structs/DoubleStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
