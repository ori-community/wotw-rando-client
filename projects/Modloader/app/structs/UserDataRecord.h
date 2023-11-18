#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserDataRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserDataRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserDataRecord_DEFINED)
#include <Modloader/app/structs/UserDataRecord__Fields.h>
#if defined(IL2CPP_STRUCT_UserDataRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_UserDataRecord_DEFINED
struct UserDataRecord__Class;
struct UserDataRecord {
    struct UserDataRecord__Class* klass;
    MonitorData* monitor;
    struct UserDataRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserDataRecord_FWDDECL)
#define IL2CPP_STRUCT_UserDataRecord_FWDDECL
#include <Modloader/app/structs/UserDataRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_UserDataRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserDataRecord_DEFINED) && !defined(IL2CPP_STRUCT_UserDataRecord_FWDDECL)
#include <Modloader/app/structs/UserDataRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserDataRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
