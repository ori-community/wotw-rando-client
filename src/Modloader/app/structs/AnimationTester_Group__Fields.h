#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester_Group__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_Group__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTester_Group__Fields_DEFINED
struct Transform;
struct String;
struct List_1_AnimationTester_AnimationTestEntry_;
struct List_1_AnimationTester_Group_;
struct __declspec(align(8)) AnimationTester_Group__Fields {
    struct Transform* Transform;
    struct String* Name;
    struct List_1_AnimationTester_AnimationTestEntry_* Entries;
    struct List_1_AnimationTester_Group_* SubGroups;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester_Group__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester_Group__Fields_FWDDECL
#include <Modloader/app/structs/List_1_AnimationTester_AnimationTestEntry_.h>
#include <Modloader/app/structs/List_1_AnimationTester_Group_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_Group__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester_Group__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationTester_Group__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester_Group__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
