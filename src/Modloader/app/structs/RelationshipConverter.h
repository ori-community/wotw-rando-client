#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RelationshipConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RelationshipConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelationshipConverter_DEFINED)
#define IL2CPP_STRUCT_RelationshipConverter_DEFINED
struct RelationshipConverter__Class;
struct RelationshipConverter {
    struct RelationshipConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RelationshipConverter_FWDDECL)
#define IL2CPP_STRUCT_RelationshipConverter_FWDDECL
#include <Modloader/app/structs/RelationshipConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_RelationshipConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RelationshipConverter_DEFINED) && !defined(IL2CPP_STRUCT_RelationshipConverter_FWDDECL)
#include <Modloader/app/structs/RelationshipConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RelationshipConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
