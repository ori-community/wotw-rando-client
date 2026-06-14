#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollRect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollRect_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollRect_DEFINED)
#include <Modloader/app/structs/ScrollRect__Fields.h>
#if defined(IL2CPP_STRUCT_ScrollRect__Fields_DEFINED)
#define IL2CPP_STRUCT_ScrollRect_DEFINED
struct ScrollRect__Class;
struct ScrollRect {
    struct ScrollRect__Class* klass;
    MonitorData* monitor;
    struct ScrollRect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollRect_FWDDECL)
#define IL2CPP_STRUCT_ScrollRect_FWDDECL
#include <Modloader/app/structs/ScrollRect__Class.h>
#endif
#undef IL2CPP_STRUCT_ScrollRect_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollRect_DEFINED) && !defined(IL2CPP_STRUCT_ScrollRect_FWDDECL)
#include <Modloader/app/structs/ScrollRect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollRect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
