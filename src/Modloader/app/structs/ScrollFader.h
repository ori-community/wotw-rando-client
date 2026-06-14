#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollFader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollFader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollFader_DEFINED)
#include <Modloader/app/structs/ScrollFader__Fields.h>
#if defined(IL2CPP_STRUCT_ScrollFader__Fields_DEFINED)
#define IL2CPP_STRUCT_ScrollFader_DEFINED
struct ScrollFader__Class;
struct ScrollFader {
    struct ScrollFader__Class* klass;
    MonitorData* monitor;
    struct ScrollFader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollFader_FWDDECL)
#define IL2CPP_STRUCT_ScrollFader_FWDDECL
#include <Modloader/app/structs/ScrollFader__Class.h>
#endif
#undef IL2CPP_STRUCT_ScrollFader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollFader_DEFINED) && !defined(IL2CPP_STRUCT_ScrollFader_FWDDECL)
#include <Modloader/app/structs/ScrollFader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollFader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
