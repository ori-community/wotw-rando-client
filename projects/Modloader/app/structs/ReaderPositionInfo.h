#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReaderPositionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReaderPositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderPositionInfo_DEFINED)
#include <Modloader/app/structs/ReaderPositionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ReaderPositionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ReaderPositionInfo_DEFINED
struct ReaderPositionInfo__Class;
struct ReaderPositionInfo {
    struct ReaderPositionInfo__Class* klass;
    MonitorData* monitor;
    struct ReaderPositionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReaderPositionInfo_FWDDECL)
#define IL2CPP_STRUCT_ReaderPositionInfo_FWDDECL
#include <Modloader/app/structs/ReaderPositionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ReaderPositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReaderPositionInfo_DEFINED) && !defined(IL2CPP_STRUCT_ReaderPositionInfo_FWDDECL)
#include <Modloader/app/structs/ReaderPositionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReaderPositionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
