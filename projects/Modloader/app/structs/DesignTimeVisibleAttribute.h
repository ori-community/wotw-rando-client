#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesignTimeVisibleAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesignTimeVisibleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignTimeVisibleAttribute_DEFINED)
#include <Modloader/app/structs/DesignTimeVisibleAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DesignTimeVisibleAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DesignTimeVisibleAttribute_DEFINED
struct DesignTimeVisibleAttribute__Class;
struct DesignTimeVisibleAttribute {
    struct DesignTimeVisibleAttribute__Class* klass;
    MonitorData* monitor;
    struct DesignTimeVisibleAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesignTimeVisibleAttribute_FWDDECL)
#define IL2CPP_STRUCT_DesignTimeVisibleAttribute_FWDDECL
#include <Modloader/app/structs/DesignTimeVisibleAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DesignTimeVisibleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignTimeVisibleAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DesignTimeVisibleAttribute_FWDDECL)
#include <Modloader/app/structs/DesignTimeVisibleAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesignTimeVisibleAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
