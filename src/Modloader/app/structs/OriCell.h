#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriCell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriCell_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCell_DEFINED)
#include <Modloader/app/structs/OriCell__Fields.h>
#if defined(IL2CPP_STRUCT_OriCell__Fields_DEFINED)
#define IL2CPP_STRUCT_OriCell_DEFINED
struct OriCell__Class;
struct OriCell {
    struct OriCell__Class* klass;
    MonitorData* monitor;
    struct OriCell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriCell_FWDDECL)
#define IL2CPP_STRUCT_OriCell_FWDDECL
#include <Modloader/app/structs/OriCell__Class.h>
#endif
#undef IL2CPP_STRUCT_OriCell_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCell_DEFINED) && !defined(IL2CPP_STRUCT_OriCell_FWDDECL)
#include <Modloader/app/structs/OriCell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriCell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
