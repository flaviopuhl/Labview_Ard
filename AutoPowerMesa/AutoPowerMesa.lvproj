<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="15008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="AutoPowerMesa 2.vi" Type="VI" URL="../AutoPowerMesa 2.vi"/>
		<Item Name="AutoPowerMesa.vi" Type="VI" URL="../AutoPowerMesa.vi"/>
		<Item Name="LabU.vi" Type="VI" URL="../LabU.vi"/>
		<Item Name="LabU_exemplo.vi" Type="VI" URL="../LabU_exemplo.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
			</Item>
			<Item Name="Arduino.vi" Type="VI" URL="../Arduino.vi"/>
		</Item>
		<Item Name="Build Specifications" Type="Build">
			<Item Name="AutoPowerMesa" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{4AB5B98F-97A6-4983-A395-BD18095D48AA}</Property>
				<Property Name="App_INI_GUID" Type="Str">{103CFC7F-E159-40D4-A633-DD0053204968}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{DFC878B1-FFA1-43BC-A664-EEE3F236E421}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">AutoPowerMesa</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds/NI_AB_PROJECTNAME/AutoPowerMesa</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{FA77A16D-6A6A-4F9E-995C-636BD0091EEC}</Property>
				<Property Name="Bld_version.build" Type="Int">4</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">AutoPowerMesa.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/NI_AB_PROJECTNAME/AutoPowerMesa/AutoPowerMesa.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">Support Directory</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/NI_AB_PROJECTNAME/AutoPowerMesa/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Source[0].itemID" Type="Str">{B7D898C0-88E7-42B7-A906-5A6E97F957B9}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/My Computer/AutoPowerMesa.vi</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/My Computer/AutoPowerMesa 2.vi</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[2].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">3</Property>
				<Property Name="TgtF_companyName" Type="Str">Nexteer Automotive</Property>
				<Property Name="TgtF_fileDescription" Type="Str">AutoPowerMesa</Property>
				<Property Name="TgtF_internalName" Type="Str">AutoPowerMesa</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Copyright © 2018 Nexteer Automotive</Property>
				<Property Name="TgtF_productName" Type="Str">AutoPowerMesa</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{35125FAD-4AEB-49AA-A345-2D219EB5D246}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">AutoPowerMesa.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
