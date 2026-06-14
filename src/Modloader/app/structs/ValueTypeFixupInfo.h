#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueTypeFixupInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueTypeFixupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo_DEFINED)
#include <Modloader/app/structs/ValueTypeFixupInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ValueTypeFixupInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueTypeFixupInfo_DEFINED
struct ValueTypeFixupInfo__Class;
struct ValueTypeFixupInfo {
    struct ValueTypeFixupInfo__Class* klass;
    MonitorData* monitor;
    struct ValueTypeFixupInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo_FWDDECL)
#define IL2CPP_STRUCT_ValueTypeFixupInfo_FWDDECL
#include <Modloader/app/structs/ValueTypeFixupInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueTypeFixupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueTypeFixupInfo_DEFINED) && !defined(IL2CPP_STRUCT_ValueTypeFixupInfo_FWDDECL)
#include <Modloader/app/structs/ValueTypeFixupInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueTypeFixupInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
