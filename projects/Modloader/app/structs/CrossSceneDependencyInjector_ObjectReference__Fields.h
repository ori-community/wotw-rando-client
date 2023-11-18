#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_DEFINED
struct Component_1;
struct String;
struct CrossSceneDependencyDatabase;
struct __declspec(align(8)) CrossSceneDependencyInjector_ObjectReference__Fields {
    struct Component_1* Component;
    struct String* FieldName;
    int32_t ReferencedObjectID;
    struct CrossSceneDependencyDatabase* DependencyDatabase;
    bool _Injected_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/CrossSceneDependencyDatabase.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_ObjectReference__Fields_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependencyInjector_ObjectReference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
