#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RelatedView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RelatedView_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelatedView_DEFINED)
#include <Modloader/app/structs/RelatedView__Fields.h>
#if defined(IL2CPP_STRUCT_RelatedView__Fields_DEFINED)
#define IL2CPP_STRUCT_RelatedView_DEFINED
struct RelatedView__Class;
struct RelatedView {
    struct RelatedView__Class* klass;
    MonitorData* monitor;
    struct RelatedView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RelatedView_FWDDECL)
#define IL2CPP_STRUCT_RelatedView_FWDDECL
#include <Modloader/app/structs/RelatedView__Class.h>
#endif
#undef IL2CPP_STRUCT_RelatedView_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelatedView_DEFINED) && !defined(IL2CPP_STRUCT_RelatedView_FWDDECL)
#include <Modloader/app/structs/RelatedView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RelatedView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
