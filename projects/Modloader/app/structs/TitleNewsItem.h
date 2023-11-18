#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleNewsItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleNewsItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleNewsItem_DEFINED)
#include <Modloader/app/structs/TitleNewsItem__Fields.h>
#if defined(IL2CPP_STRUCT_TitleNewsItem__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleNewsItem_DEFINED
struct TitleNewsItem__Class;
struct TitleNewsItem {
    struct TitleNewsItem__Class* klass;
    MonitorData* monitor;
    struct TitleNewsItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleNewsItem_FWDDECL)
#define IL2CPP_STRUCT_TitleNewsItem_FWDDECL
#include <Modloader/app/structs/TitleNewsItem__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleNewsItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleNewsItem_DEFINED) && !defined(IL2CPP_STRUCT_TitleNewsItem_FWDDECL)
#include <Modloader/app/structs/TitleNewsItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleNewsItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
