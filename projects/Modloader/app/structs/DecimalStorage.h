#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecimalStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecimalStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalStorage_DEFINED)
#include <Modloader/app/structs/DecimalStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DecimalStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_DecimalStorage_DEFINED
struct DecimalStorage__Class;
struct DecimalStorage {
    struct DecimalStorage__Class* klass;
    MonitorData* monitor;
    struct DecimalStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecimalStorage_FWDDECL)
#define IL2CPP_STRUCT_DecimalStorage_FWDDECL
#include <Modloader/app/structs/DecimalStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_DecimalStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecimalStorage_DEFINED) && !defined(IL2CPP_STRUCT_DecimalStorage_FWDDECL)
#include <Modloader/app/structs/DecimalStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecimalStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
