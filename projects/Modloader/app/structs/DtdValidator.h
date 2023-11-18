#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdValidator_DEFINED)
#include <Modloader/app/structs/DtdValidator__Fields.h>
#if defined(IL2CPP_STRUCT_DtdValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_DtdValidator_DEFINED
struct DtdValidator__Class;
struct DtdValidator {
    struct DtdValidator__Class* klass;
    MonitorData* monitor;
    struct DtdValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DtdValidator_FWDDECL)
#define IL2CPP_STRUCT_DtdValidator_FWDDECL
#include <Modloader/app/structs/DtdValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_DtdValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdValidator_DEFINED) && !defined(IL2CPP_STRUCT_DtdValidator_FWDDECL)
#include <Modloader/app/structs/DtdValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
