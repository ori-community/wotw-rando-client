#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringCageMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringCageMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringCageMetaData_DEFINED)
#include <Modloader/app/structs/StringCageMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_StringCageMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_StringCageMetaData_DEFINED
struct StringCageMetaData__Class;
struct StringCageMetaData {
    struct StringCageMetaData__Class* klass;
    MonitorData* monitor;
    struct StringCageMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringCageMetaData_FWDDECL)
#define IL2CPP_STRUCT_StringCageMetaData_FWDDECL
#include <Modloader/app/structs/StringCageMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_StringCageMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringCageMetaData_DEFINED) && !defined(IL2CPP_STRUCT_StringCageMetaData_FWDDECL)
#include <Modloader/app/structs/StringCageMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringCageMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
