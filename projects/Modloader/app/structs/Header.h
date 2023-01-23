#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Header_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Header_INITIALIZING
#if !defined(IL2CPP_STRUCT_Header_DEFINED)
#include <Modloader/app/structs/Header__Fields.h>
#if defined(IL2CPP_STRUCT_Header__Fields_DEFINED)
#define IL2CPP_STRUCT_Header_DEFINED
struct Header__Class;
struct Header {
    struct Header__Class* klass;
    MonitorData* monitor;
    struct Header__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Header_FWDDECL)
#define IL2CPP_STRUCT_Header_FWDDECL
#include <Modloader/app/structs/Header__Class.h>
#endif
#undef IL2CPP_STRUCT_Header_INITIALIZING
#if !defined(IL2CPP_STRUCT_Header_DEFINED) && !defined(IL2CPP_STRUCT_Header_FWDDECL)
#include <Modloader/app/structs/Header.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Header.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
