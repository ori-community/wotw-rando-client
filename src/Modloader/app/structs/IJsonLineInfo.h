#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IJsonLineInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IJsonLineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IJsonLineInfo_DEFINED)
#define IL2CPP_STRUCT_IJsonLineInfo_DEFINED
struct IJsonLineInfo__Class;
struct IJsonLineInfo {
    struct IJsonLineInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IJsonLineInfo_FWDDECL)
#define IL2CPP_STRUCT_IJsonLineInfo_FWDDECL
#include <Modloader/app/structs/IJsonLineInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IJsonLineInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IJsonLineInfo_DEFINED) && !defined(IL2CPP_STRUCT_IJsonLineInfo_FWDDECL)
#include <Modloader/app/structs/IJsonLineInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IJsonLineInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
