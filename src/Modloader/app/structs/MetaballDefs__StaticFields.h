#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaballDefs__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaballDefs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballDefs__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MetaballDefs__StaticFields_DEFINED
struct Vector3__Array__Array;
struct Int32__Array__Array;
struct MetaballDefs__StaticFields {
    struct Vector3__Array__Array* PointLookupTable;
    struct Int32__Array__Array* TriangleLookupTable;
};
#endif
#if !defined(IL2CPP_STRUCT_MetaballDefs__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MetaballDefs__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/Vector3__Array__Array.h>
#endif
#undef IL2CPP_STRUCT_MetaballDefs__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballDefs__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MetaballDefs__StaticFields_FWDDECL)
#include <Modloader/app/structs/MetaballDefs__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaballDefs__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
