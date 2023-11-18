#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuideStone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuideStone_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuideStone_DEFINED)
#include <Modloader/app/structs/GuideStone__Fields.h>
#if defined(IL2CPP_STRUCT_GuideStone__Fields_DEFINED)
#define IL2CPP_STRUCT_GuideStone_DEFINED
struct GuideStone__Class;
struct GuideStone {
    struct GuideStone__Class* klass;
    MonitorData* monitor;
    struct GuideStone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuideStone_FWDDECL)
#define IL2CPP_STRUCT_GuideStone_FWDDECL
#include <Modloader/app/structs/GuideStone__Class.h>
#endif
#undef IL2CPP_STRUCT_GuideStone_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuideStone_DEFINED) && !defined(IL2CPP_STRUCT_GuideStone_FWDDECL)
#include <Modloader/app/structs/GuideStone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuideStone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
